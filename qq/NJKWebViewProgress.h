//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/UIWebViewDelegate-Protocol.h>

@class NSString;
@protocol NJKWebViewProgressDelegate;

@interface NJKWebViewProgress : NSObject <UIWebViewDelegate>
{
    float _progress;
    id <NJKWebViewProgressDelegate> _progressDelegate;
    CDUnknownBlockType _progressBlock;
}

@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) __weak id <NJKWebViewProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)reset;
- (void)setProgress:(float)arg1;
- (void)completeProgress;
- (void)startProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

