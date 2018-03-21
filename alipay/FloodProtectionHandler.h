//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ErrorHandler-Protocol.h"

@class NSString;
@protocol FloodProtectionDelegate;

@interface FloodProtectionHandler : NSObject <ErrorHandler>
{
    id <FloodProtectionDelegate> _delegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id <FloodProtectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned short)handle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

