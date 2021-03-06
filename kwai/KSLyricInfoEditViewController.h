//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

@class KSLyricInfoEditView, NSString;
@protocol KSLyricInfoEditViewControllerDelegate;

@interface KSLyricInfoEditViewController : KSBaseViewController
{
    id <KSLyricInfoEditViewControllerDelegate> _delegate;
    KSLyricInfoEditView *_contentView;
    NSString *_unsavedLyric;
    NSString *_savedLyric;
}

@property(retain, nonatomic) NSString *savedLyric; // @synthesize savedLyric=_savedLyric;
@property(retain, nonatomic) NSString *unsavedLyric; // @synthesize unsavedLyric=_unsavedLyric;
@property(retain, nonatomic) KSLyricInfoEditView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <KSLyricInfoEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *lyric; // @dynamic lyric;
- (_Bool)_textNotChanged;
- (void)didTapFakeDisabledRightNavigationButton:(id)arg1;
- (void)didTapRightNavigationButton:(id)arg1;
- (void)_updateSaveButton;
- (void)_setupActions;
- (void)didTapBackNagigationButton:(id)arg1;
- (void)_setupUI;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLyric:(id)arg1 unsavedLyric:(id)arg2;

@end

