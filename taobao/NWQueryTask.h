//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol NWPolicyViewerDelegate;

@interface NWQueryTask : NSObject
{
    NSString *_host;
    id <NWPolicyViewerDelegate> _delegate;
}

@property(nonatomic) __weak id <NWPolicyViewerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end

