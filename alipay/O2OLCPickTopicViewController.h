//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OViewController.h"

#import "O2OCommonSchemeProtocol-Protocol.h"
#import "O2OLCHotTopicViewControllerDelegate-Protocol.h"
#import "O2OLCNewQuestionLoadingViewDelegate-Protocol.h"
#import "O2OLCTopicSearchViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, O2OLCHotTopicViewController, O2OLCNewQuestionLoadingView, O2OLCNewQuestionModel, O2OLCRandomProInfoModel, O2OLCTopicSearchViewController, UIButton, UICollectionView, UITextField, UIView;

@interface O2OLCPickTopicViewController : O2OViewController <O2OLCHotTopicViewControllerDelegate, O2OLCTopicSearchViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITextFieldDelegate, UIAlertViewDelegate, O2OLCNewQuestionLoadingViewDelegate, O2OCommonSchemeProtocol>
{
    UIButton *_publishButton;
    NSMutableArray *_selectedTopics;
    UIView *_contentView;
    O2OLCHotTopicViewController *_hotTopicController;
    O2OLCTopicSearchViewController *_searchTopicController;
    UICollectionView *_selectedTopicView;
    UITextField *_searchInputView;
    O2OLCNewQuestionModel *_publishModel;
    O2OLCRandomProInfoModel *_randomProInfoModel;
    O2OLCNewQuestionLoadingView *_loadingView;
    CDUnknownBlockType _publishHandler;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType publishHandler; // @synthesize publishHandler=_publishHandler;
@property(retain, nonatomic) O2OLCNewQuestionLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) O2OLCRandomProInfoModel *randomProInfoModel; // @synthesize randomProInfoModel=_randomProInfoModel;
@property(retain, nonatomic) O2OLCNewQuestionModel *publishModel; // @synthesize publishModel=_publishModel;
@property(retain, nonatomic) UITextField *searchInputView; // @synthesize searchInputView=_searchInputView;
@property(retain, nonatomic) UICollectionView *selectedTopicView; // @synthesize selectedTopicView=_selectedTopicView;
@property(retain, nonatomic) O2OLCTopicSearchViewController *searchTopicController; // @synthesize searchTopicController=_searchTopicController;
@property(retain, nonatomic) O2OLCHotTopicViewController *hotTopicController; // @synthesize hotTopicController=_hotTopicController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *selectedTopics; // @synthesize selectedTopics=_selectedTopics;
@property(retain, nonatomic) UIButton *publishButton; // @synthesize publishButton=_publishButton;
- (void).cxx_destruct;
- (id)pageSpm;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showQuitAlert;
- (void)back;
- (void)searchController:(id)arg1 didSelectTopic:(id)arg2;
- (void)topicController:(id)arg1 didSelectTopic:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)searchTextChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)animationDidCompleteOnce:(id)arg1;
- (void)handlePublishResult:(id)arg1;
- (void)publishButtonPressed:(id)arg1;
- (void)loadRandomProInfo;
- (void)selectedTopicChanged;
- (void)removeTopic:(id)arg1;
- (void)addTopic:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

