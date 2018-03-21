//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSPageViewController.h"

#import "KSScrollTitleViewDelegate-Protocol.h"
#import "KSSelectForMailViewControllerDelegate-Protocol.h"
#import "KSURLPortal-Protocol.h"
#import "KSURLPortalAnnotation-Protocol.h"

@class KSGossipListViewController, KSLetterListViewController, KSMessageListViewController, KSNotifyListViewController, KSPointView, KSScrollTitleView, NSString;

@interface KSAboutFriendsViewController : KSPageViewController <KSURLPortalAnnotation, KSURLPortal, KSScrollTitleViewDelegate, KSSelectForMailViewControllerDelegate>
{
    KSGossipListViewController *_gossipListViewController;
    KSNotifyListViewController *_notifylistViewController;
    KSMessageListViewController *_messageListViewController;
    KSLetterListViewController *_letterListViewController;
    KSScrollTitleView *_topView;
    KSPointView *_letterPointView;
}

+ (id)ks_portalPath;
@property(retain, nonatomic) KSPointView *letterPointView; // @synthesize letterPointView=_letterPointView;
@property(retain, nonatomic) KSScrollTitleView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) KSLetterListViewController *letterListViewController; // @synthesize letterListViewController=_letterListViewController;
@property(retain, nonatomic) KSMessageListViewController *messageListViewController; // @synthesize messageListViewController=_messageListViewController;
@property(retain, nonatomic) KSNotifyListViewController *notifylistViewController; // @synthesize notifylistViewController=_notifylistViewController;
@property(retain, nonatomic) KSGossipListViewController *gossipListViewController; // @synthesize gossipListViewController=_gossipListViewController;
- (void).cxx_destruct;
- (void)ks_didCancelInteractiveTransitioning:(id)arg1;
- (void)ks_didEndInteractiveTransitioning:(id)arg1;
- (void)ks_willStartInteractiveTransitioning:(unsigned long long)arg1;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (id)ks_followRefer;
- (id)ksuShowMetaData;
- (id)pageURL;
- (void)selectForMailViewController:(id)arg1 didSelectWithName:(id)arg2 userId:(id)arg3 headURL:(id)arg4;
- (void)didTapRightNavigationButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollTitleView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateLetterPointView;
- (void)_pageIndexChangedFrom:(long long)arg1;
- (struct CGSize)pageSize;
- (void)viewDidLoad;
- (id)initWithInitialIndex:(unsigned long long)arg1;
- (id)init;
- (_Bool)ks_presentViewNeedUserAvailable;
- (void)ks_setupViewControllerWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

