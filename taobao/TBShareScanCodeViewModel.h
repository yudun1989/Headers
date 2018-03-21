//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareScanCodeView, UIViewController;

@interface TBShareScanCodeViewModel : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cancelBlock;
    TBShareScanCodeView *_scancodeView;
    long long _author;
    UIViewController *_parentViewController;
    long long _oldBarStyle;
}

@property(nonatomic) long long oldBarStyle; // @synthesize oldBarStyle=_oldBarStyle;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) long long author; // @synthesize author=_author;
@property(retain, nonatomic) TBShareScanCodeView *scancodeView; // @synthesize scancodeView=_scancodeView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)resetStatusBar;
- (void)setStatusBar;
- (void)dismissQRView;
- (void)dismiss;
- (void)shareWithModel:(id)arg1 viewController:(id)arg2;

@end

