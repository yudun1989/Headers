//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class APGSearchBar, FBDocument, NSArray, NSString, UIScrollView;
@protocol APConfigService;

@interface APGDefaultSearchViewController : UIViewController
{
    APGSearchBar *_searchBar;
    NSString *_spaceCode;
    NSString *_targetId;
    FBDocument *_defaultSearchDocument;
    UIScrollView *_defaultSearchScrollView;
    NSString *_defaultSearchViewTitle;
    id <APConfigService> _configService;
    NSArray *_showedHotWords;
    NSString *_showedHotWordsBucketId;
}

@property(retain, nonatomic) NSString *showedHotWordsBucketId; // @synthesize showedHotWordsBucketId=_showedHotWordsBucketId;
@property(retain, nonatomic) NSArray *showedHotWords; // @synthesize showedHotWords=_showedHotWords;
@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
@property(retain, nonatomic) NSString *defaultSearchViewTitle; // @synthesize defaultSearchViewTitle=_defaultSearchViewTitle;
@property(retain, nonatomic) UIScrollView *defaultSearchScrollView; // @synthesize defaultSearchScrollView=_defaultSearchScrollView;
@property(retain, nonatomic) FBDocument *defaultSearchDocument; // @synthesize defaultSearchDocument=_defaultSearchDocument;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) __weak APGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2;
- (id)getClickHotWordsIndex:(id)arg1 objectId:(id)arg2 showWord:(id)arg3;
- (_Bool)isKey:(id)arg1 alreadyInHotWords:(id)arg2;
- (void)logNoShowHotWords;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)checkShowHistory;
- (void)checkShowCategory;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

