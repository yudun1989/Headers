//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSPopoverViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class KSLiveUserOperationView, KSLiveUserProductCollectionView, KSLiveUserProfileUserInfoView, KSLiveUserProfileViewModel, NSLayoutConstraint, NSString, UIView;

@interface KSLiveUserProfileViewController : KSPopoverViewController <UIGestureRecognizerDelegate>
{
    _Bool _viewDidLoaded;
    _Bool _viewWillDismiss;
    _Bool _spreaded;
    _Bool _spreadAnimating;
    KSLiveUserProfileViewModel *_userProfileViewModel;
    CDUnknownBlockType _liveUserOperation;
    CDUnknownBlockType _liveUserProfileCheckProduct;
    CDUnknownBlockType _withUserAvaliable;
    UIView *_draggableContentView;
    KSLiveUserProfileUserInfoView *_userInfoView;
    KSLiveUserOperationView *_operationView;
    UIView *_productContainerView;
    KSLiveUserProductCollectionView *_productView;
    NSLayoutConstraint *_infoViewHeight;
    NSLayoutConstraint *_productHeight;
    double _scrollTranslateOffset;
    struct CGPoint _stayContentOffset;
}

+ (id)userProfileViewControllerWithUserProfileViewModel:(id)arg1;
@property(nonatomic) struct CGPoint stayContentOffset; // @synthesize stayContentOffset=_stayContentOffset;
@property(nonatomic) double scrollTranslateOffset; // @synthesize scrollTranslateOffset=_scrollTranslateOffset;
@property(nonatomic) _Bool spreadAnimating; // @synthesize spreadAnimating=_spreadAnimating;
@property(nonatomic) _Bool spreaded; // @synthesize spreaded=_spreaded;
@property(nonatomic) __weak NSLayoutConstraint *productHeight; // @synthesize productHeight=_productHeight;
@property(nonatomic) __weak NSLayoutConstraint *infoViewHeight; // @synthesize infoViewHeight=_infoViewHeight;
@property(nonatomic) _Bool viewWillDismiss; // @synthesize viewWillDismiss=_viewWillDismiss;
@property(nonatomic) _Bool viewDidLoaded; // @synthesize viewDidLoaded=_viewDidLoaded;
@property(retain, nonatomic) KSLiveUserProductCollectionView *productView; // @synthesize productView=_productView;
@property(retain, nonatomic) UIView *productContainerView; // @synthesize productContainerView=_productContainerView;
@property(retain, nonatomic) KSLiveUserOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) KSLiveUserProfileUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UIView *draggableContentView; // @synthesize draggableContentView=_draggableContentView;
@property(copy, nonatomic) CDUnknownBlockType withUserAvaliable; // @synthesize withUserAvaliable=_withUserAvaliable;
@property(copy, nonatomic) CDUnknownBlockType liveUserProfileCheckProduct; // @synthesize liveUserProfileCheckProduct=_liveUserProfileCheckProduct;
@property(copy, nonatomic) CDUnknownBlockType liveUserOperation; // @synthesize liveUserOperation=_liveUserOperation;
@property(retain, nonatomic) KSLiveUserProfileViewModel *userProfileViewModel; // @synthesize userProfileViewModel=_userProfileViewModel;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)dismissAnimation;
- (void)layoutDidUpdate;
- (struct KSPopoverSize)contentKeySize;
- (void)_followUser:(id)arg1 following:(_Bool)arg2;
- (void)_clickEventWithName:(id)arg1 action:(int)arg2 index:(int)arg3;
- (double)_userInfoHeight;
- (void)_updateProductHeight;
- (void)_loadMoreProductsIfNeed;
- (void)_setUpUI;
- (void)panGestureChanged:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didReceiveDeleteFeedNotification:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

