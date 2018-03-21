//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BMKMapTip, NSArray, NSMutableArray, NSString, UIColor, UISearchBar, UITableView, UIView;

@interface MBKPOISearchViewController : MBKBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UIAlertViewDelegate>
{
    _Bool _isHistory;
    UIColor *statusOriginalColor;
    BMKMapTip *_userTip;
    CDUnknownBlockType _poiHandler;
    UIView *_nearCell;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    NSMutableArray *_resultList;
    NSArray *_addressArray;
    struct CLLocationCoordinate2D _location;
}

@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(retain) NSArray *addressArray; // @synthesize addressArray=_addressArray;
@property(retain, nonatomic) NSMutableArray *resultList; // @synthesize resultList=_resultList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *nearCell; // @synthesize nearCell=_nearCell;
@property(copy, nonatomic) CDUnknownBlockType poiHandler; // @synthesize poiHandler=_poiHandler;
@property(retain, nonatomic) BMKMapTip *userTip; // @synthesize userTip=_userTip;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tapGesture:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)didSearchPOIWithResponse:(id)arg1 err:(id)arg2;
- (void)didSearchTipsWithResponse:(id)arg1 err:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)clearLocal;
- (void)writeToLocalFileWithTip:(id)arg1;
- (id)readFromLocalFile;
- (void)onBackAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)setStatusBarBackgroundColor:(id)arg1;
- (void)setupView;
- (void)setupController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

