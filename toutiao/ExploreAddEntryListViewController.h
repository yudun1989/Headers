//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class ExploreAddEntryListView, NSString;

@interface ExploreAddEntryListViewController : SSViewControllerBase
{
    ExploreAddEntryListView *_subscriptionListView;
    NSString *_needShowGroupID;
}

@property(retain, nonatomic) NSString *needShowGroupID; // @synthesize needShowGroupID=_needShowGroupID;
@property(retain, nonatomic) ExploreAddEntryListView *subscriptionListView; // @synthesize subscriptionListView=_subscriptionListView;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showSearch:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGRect)frameForListView;
- (id)initWithShowGroupID:(id)arg1;
- (id)init;

@end

