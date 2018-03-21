//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBShopContainerViewModel.h"

@class NSArray, TBShopTabContainerComponent, TBShopTabStyleSuite;

@interface TBShopTabContainerViewModel : TBShopContainerViewModel
{
    TBShopTabStyleSuite *_tabStyle;
    unsigned long long _selectedIndex;
    NSArray *_childTabs;
    double _containerSuggestHeight;
    unsigned long long _activeTabIndex;
    TBShopTabStyleSuite *_activeTabStyle;
    TBShopTabContainerComponent *_model;
}

@property(retain, nonatomic) TBShopTabContainerComponent *model; // @synthesize model=_model;
@property(retain, nonatomic) TBShopTabStyleSuite *activeTabStyle; // @synthesize activeTabStyle=_activeTabStyle;
@property(nonatomic) unsigned long long activeTabIndex; // @synthesize activeTabIndex=_activeTabIndex;
@property(nonatomic) double containerSuggestHeight; // @synthesize containerSuggestHeight=_containerSuggestHeight;
@property(retain, nonatomic) NSArray *childTabs; // @synthesize childTabs=_childTabs;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) TBShopTabStyleSuite *tabStyle; // @synthesize tabStyle=_tabStyle;
- (void).cxx_destruct;
- (void)selectIndex:(unsigned long long)arg1;
- (id)createViewController;
- (id)cellIdentifier;
- (id)getTabStyleSuite:(id)arg1;
- (void)constrcutWithModel:(id)arg1;

@end

