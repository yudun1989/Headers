//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SearchManager : NSObject
{
    NSMutableArray *_searchHistArray;
}

+ (void)clean;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *searchHistArray; // @synthesize searchHistArray=_searchHistArray;
- (void).cxx_destruct;
- (id)init;
- (void)persistentArray;
- (void)cleaSearchHistory;
- (void)addHistory:(id)arg1;
- (id)historyObjectAtIndex:(long long)arg1;
- (id)loadSearchHistory;

@end

