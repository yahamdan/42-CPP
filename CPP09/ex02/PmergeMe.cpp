
#include "PmergeMe.hpp"

// Ford-Johnson algorithm using std::vector 

void    mergesort( std::vector<std::pair<int, int> > & pairs, int f , int m , int l )
{
    int p1 = m - f + 1;
    int p2 = l - m;
    
    std::vector<std::pair<int, int> > first(p1);
    std::vector<std::pair<int, int> > second(p2);
    
    for (int i = 0 ; i < p1 ; i++ )
        first[i] = pairs[f + i];
        
    for ( int i = 0 ; i < p2 ; i++)
        second[i] = pairs[m + i + 1];
        
    int i = 0;
    int j = 0;
    int k = f;
    
    while ( i < p1 && j < p2 )
    {
        if ( first[i].first <= second[j].first){
            pairs[k].first = first[i].first;
            i++;
        }
        else{
            pairs[k].first = second[j].first;
            j++;
        }
        k++;
    }

    for (int d = i ; d < p1 ; d++ )
        pairs[k++].first = first[d].first; 
        
    for ( int b = j ; b < p2 ; b++)
        pairs[k++].first = second[b].first; 
}

void    sortpairs( std::vector<std::pair<int, int> > & pairs , int first , int last )
{
    if( first < last )
    {
        int md = ( first + last ) / 2;
        
        sortpairs( pairs , first , md );
        sortpairs( pairs , md + 1 , last );
        mergesort( pairs , first , md , last );
        for ( size_t i = 0 ; i < pairs.size() ; i++ ){
            if ( pairs[i].first < pairs[i].second )
                std::swap(pairs[i].first, pairs[i].second);
        }
    }
}

std::vector<int>    PmergeMe( std::vector<int> &vec )
{   
    std::vector<int> lvec;
    std::vector<std::pair<int, int> > pairs;
    int val;
    
    for ( size_t i = 0 ; i < vec.size() - 1 ; i += 2 ){
        std::pair<int , int > cp = std::make_pair(vec[i], vec[i + 1]);
        pairs.push_back(cp);
        if ( vec.size() % 2 != 0 )
            val = *( vec.end() - 1 );
    }
    
    for ( size_t i = 0 ; i < pairs.size() ; i++ ){
        if ( pairs[i].first < pairs[i].second )
            std::swap(pairs[i].first, pairs[i].second);
    }
    
    sortpairs( pairs , 0 , pairs.size( ) - 1 );
    
    for ( size_t i = 0 ; i < pairs.size() ; i++ )
        lvec.push_back(pairs[i].first);
        
    for ( size_t i = 0 ; i < pairs.size() ; i++ )
        lvec.insert(std::upper_bound(lvec.begin(), lvec.end(), pairs[i].second) , pairs[i].second);

    if ( vec.size() % 2 != 0 )
            lvec.insert(std::upper_bound(lvec.begin(), lvec.end(), val) , val);

    return lvec;
}

double  vSort( std::vector<int>& vec )
{
    clock_t stime , etime;
    double time;
    
    stime = clock();
    
    vec = PmergeMe( vec );
    etime = clock();
    time = ((((double)(etime) / CLOCKS_PER_SEC) - ((double)(stime) / CLOCKS_PER_SEC)) * 1000000);
    
    return time;
}

// Ford-Johnson algorithm using std::deque

void    mergesort( std::deque<std::pair<int, int> > & pairs, int f , int m , int l )
{
    int p1 = m - f + 1;
    int p2 = l - m;
    
    std::deque<std::pair<int, int> > first(p1);
    std::deque<std::pair<int, int> > second(p2);
    
    for (int i = 0 ; i < p1 ; i++ )
        first[i] = pairs[f + i];
        
    for ( int i = 0 ; i < p2 ; i++)
        second[i] = pairs[m + i + 1];
        
    int i = 0;
    int j = 0;
    int k = f;
    
    while ( i < p1 && j < p2 )
    {
        if ( first[i].first <= second[j].first){
            pairs[k].first = first[i].first;
            i++;
        }
        else{
            pairs[k].first = second[j].first;
            j++;
        }
        k++;
    }

    for (int d = i ; d < p1 ; d++ )
        pairs[k++].first = first[d].first; 
        
    for ( int b = j ; b < p2 ; b++)
        pairs[k++].first = second[b].first; 
}

void    sortpairs( std::deque<std::pair<int, int> > & pairs , int first , int last )
{
    if( first < last )
    {
        int md = ( first + last ) / 2;
        
        sortpairs( pairs , first , md );
        sortpairs( pairs , md + 1 , last );
        mergesort( pairs , first , md , last );
        for ( size_t i = 0 ; i < pairs.size() ; i++ ){
            if ( pairs[i].first < pairs[i].second )
                std::swap(pairs[i].first, pairs[i].second);
        }
    }
}

std::deque<int>   PmergeMe( std::deque<int> &vec )
{
    std::deque<int> dequ;
    std::deque<std::pair<int, int> > pairs;
    int val;
    
    for ( size_t i = 0 ; i < vec.size() - 1 ; i += 2 ){
        std::pair<int , int > cp = std::make_pair(vec[i], vec[i + 1]);
        pairs.push_back(cp);
        if ( vec.size() % 2 != 0 )
            val = *( vec.end() - 1 );
    }
    
    for ( size_t i = 0 ; i < pairs.size() ; i++ ){
        if ( pairs[i].first < pairs[i].second )
            std::swap(pairs[i].first, pairs[i].second);
    }
    
    sortpairs( pairs , 0 , pairs.size( ) - 1 );
    
    for ( size_t i = 0 ; i < pairs.size() ; i++ )
        dequ.push_back(pairs[i].first);
        
    for ( size_t i = 0 ; i < pairs.size() ; i++ )
        dequ.insert(std::upper_bound(dequ.begin(), dequ.end(), pairs[i].second) , pairs[i].second);

    if ( vec.size() % 2 != 0 )
            dequ.insert(std::upper_bound(dequ.begin(), dequ.end(), val) , val);

    return dequ;
}

double  dSort( std::deque<int>& deq )
{
    clock_t stime , etime;
    double time;
    
    stime = clock();
    
    deq = PmergeMe( deq );
    etime = clock();
    time = ((((double)(etime) / CLOCKS_PER_SEC) - ((double)(stime) / CLOCKS_PER_SEC)) * 1000000);
    
    return time;
}