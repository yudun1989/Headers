//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class CAGradientLayer, MWebLoadingView, NSMutableDictionary, NSMutableURLRequest, NSString, NSURL, UIButton, UIColor, UIImage, UIImageView, UINavigationBar, UIPopoverController, UIToolbar, UIView, UIWebView;

@interface MWebViewController : UIViewController <UIActionSheetDelegate, UIPopoverControllerDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, UIWebViewDelegate>
{
    struct {
        struct CGSize frameSize;
        struct CGSize contentSize;
        struct CGPoint contentOffset;
        double zoomScale;
        double minimumZoomScale;
        double maximumZoomScale;
        double topEdgeInset;
        double bottomEdgeInset;
    } _webViewState;
    struct {
        long long loadingCount;
        long long maxLoadCount;
        _Bool interactive;
        double loadingProgress;
    } _loadingProgressState;
    _Bool _showLoadingBar;
    _Bool _showUrlWhileLoading;
    _Bool _navigationButtonsHidden;
    _Bool _showActionButton;
    _Bool _showDoneButton;
    _Bool _showPageTitles;
    _Bool _disableContextualPopupMenu;
    _Bool _hideWebViewBoundaries;
    _Bool _hideToolbarOnClose;
    _Bool _hideNavBarOnClose;
    NSURL *_url;
    NSMutableURLRequest *_urlRequest;
    UIWebView *_webView;
    UIColor *_loadingBarTintColor;
    NSString *_doneButtonTitle;
    CDUnknownBlockType _modalCompletionHandler;
    CDUnknownBlockType _shouldStartLoadRequestHandler;
    UIColor *_buttonTintColor;
    double _buttonBevelOpacity;
    MWebLoadingView *_loadingBarView;
    UIImageView *_webViewRotationSnapshot;
    CAGradientLayer *_gradientLayer;
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_reloadStopButton;
    UIButton *_actionButton;
    UIView *_buttonsContainerView;
    double _buttonWidth;
    double _buttonSpacing;
    UIImage *_reloadIcon;
    UIImage *_stopIcon;
    NSMutableDictionary *_buttonThemeAttributes;
    UIPopoverController *_sharingPopoverController;
}

@property(nonatomic) _Bool hideNavBarOnClose; // @synthesize hideNavBarOnClose=_hideNavBarOnClose;
@property(nonatomic) _Bool hideToolbarOnClose; // @synthesize hideToolbarOnClose=_hideToolbarOnClose;
@property(retain, nonatomic) UIPopoverController *sharingPopoverController; // @synthesize sharingPopoverController=_sharingPopoverController;
@property(retain, nonatomic) NSMutableDictionary *buttonThemeAttributes; // @synthesize buttonThemeAttributes=_buttonThemeAttributes;
@property(retain, nonatomic) UIImage *stopIcon; // @synthesize stopIcon=_stopIcon;
@property(retain, nonatomic) UIImage *reloadIcon; // @synthesize reloadIcon=_reloadIcon;
@property(nonatomic) double buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(retain, nonatomic) UIView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIButton *reloadStopButton; // @synthesize reloadStopButton=_reloadStopButton;
@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *webViewRotationSnapshot; // @synthesize webViewRotationSnapshot=_webViewRotationSnapshot;
@property(retain, nonatomic) MWebLoadingView *loadingBarView; // @synthesize loadingBarView=_loadingBarView;
@property(nonatomic) double buttonBevelOpacity; // @synthesize buttonBevelOpacity=_buttonBevelOpacity;
@property(retain, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
@property(copy, nonatomic) CDUnknownBlockType shouldStartLoadRequestHandler; // @synthesize shouldStartLoadRequestHandler=_shouldStartLoadRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType modalCompletionHandler; // @synthesize modalCompletionHandler=_modalCompletionHandler;
@property(nonatomic) _Bool hideWebViewBoundaries; // @synthesize hideWebViewBoundaries=_hideWebViewBoundaries;
@property(nonatomic) _Bool disableContextualPopupMenu; // @synthesize disableContextualPopupMenu=_disableContextualPopupMenu;
@property(nonatomic) _Bool showPageTitles; // @synthesize showPageTitles=_showPageTitles;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(nonatomic) _Bool showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) _Bool showActionButton; // @synthesize showActionButton=_showActionButton;
@property(nonatomic) _Bool navigationButtonsHidden; // @synthesize navigationButtonsHidden=_navigationButtonsHidden;
@property(copy, nonatomic) UIColor *loadingBarTintColor; // @synthesize loadingBarTintColor=_loadingBarTintColor;
@property(nonatomic) _Bool showUrlWhileLoading; // @synthesize showUrlWhileLoading=_showUrlWhileLoading;
@property(nonatomic) _Bool showLoadingBar; // @synthesize showLoadingBar=_showLoadingBar;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)restoreWebViewFromRotationFromOrientation:(long long)arg1;
- (void)animateWebViewRotationToOrientation:(long long)arg1 withDuration:(double)arg2;
- (void)setUpWebViewForRotationToOrientation:(long long)arg1 withDuration:(double)arg2;
- (struct CGRect)rectForVisibleRegionOfWebViewAnimatingToOrientation:(long long)arg1;
- (id)webViewPageBackgroundColor;
- (_Bool)webViewPageWidthIsDynamic;
- (id)webViewContentView;
- (void)refreshButtonsState;
- (void)handleLoadRequestCompletion;
- (void)setLoadingProgress:(double)arg1;
- (void)finishLoadProgress;
- (void)incrementLoadProgress;
- (void)startLoadProgress;
- (void)resetLoadProgress;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)openMessageDialog;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)openMailDialog;
- (void)openInBrowser;
- (void)copyURLToClipboard;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)reloadStopButtonTapped:(id)arg1;
- (void)forwardButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
@property(readonly, nonatomic) UIToolbar *toolbar;
@property(readonly, nonatomic) UINavigationBar *navigationBar;
@property(readonly, nonatomic) _Bool onTopOfNavigationControllerStack;
@property(readonly, nonatomic) _Bool beingPresentedModally;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)containerViewWithNavigationButtons;
- (void)setUpNavigationButtons;
- (void)loadView;
- (void)setup;
- (id)cleanURL:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

