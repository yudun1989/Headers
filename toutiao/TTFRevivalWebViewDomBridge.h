//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTFRevivalWebViewProtocol-Protocol.h"

@class TTFRevivalTaskView;

@interface TTFRevivalWebViewDomBridge : NSObject <TTFRevivalWebViewProtocol>
{
    TTFRevivalTaskView *_taskView;
}

@property(nonatomic) __weak TTFRevivalTaskView *taskView; // @synthesize taskView=_taskView;
- (void).cxx_destruct;
- (void)domReady;

@end

