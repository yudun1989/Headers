//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "ArticleCityManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ArticleListNotifyBarView, NSArray, NSDictionary, NSString, UITableView;

@interface ArticleCityView : SSViewBase <UITableViewDataSource, UITableViewDelegate, ArticleCityManagerDelegate>
{
    _Bool _hasApppear;
    long long _loadState;
    UITableView *_listView;
    NSArray *_groupedCities;
    NSDictionary *_currentCityDict;
    ArticleListNotifyBarView *_notifyBarView;
}

@property(retain, nonatomic) ArticleListNotifyBarView *notifyBarView; // @synthesize notifyBarView=_notifyBarView;
@property(retain, nonatomic) NSDictionary *currentCityDict; // @synthesize currentCityDict=_currentCityDict;
@property(retain, nonatomic) NSArray *groupedCities; // @synthesize groupedCities=_groupedCities;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)showNotifyBarMsg:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)cityManager:(id)arg1 updateFinishedResult:(id)arg2 error:(id)arg3;
- (void)loadMore;
- (void)loadData;
- (void)prepareDataSource;
- (void)reloadCity;
- (id)loadCityTextForLoadCityStateWithName:(id)arg1;
- (void)updateDataSourceForLoadCityState;
- (void)updateFrames;
- (void)updateThemes;
- (void)didAppear;
- (void)loadView;
- (void)ssLayoutSubviews;
- (void)layoutSubviews;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

