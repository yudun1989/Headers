//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMMessageAMP.h"

#import "TBIMExtendMessage-Protocol.h"

@class NSString;

@interface TBIMMessageAMPExtend : TBIMMessageAMP <TBIMExtendMessage>
{
}

- (id)extContent;
- (id)actionUrl;
- (id)activeContent;
- (id)extType;
- (long long)extVersion;
- (id)message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) struct CGSize text1Size;
@property(nonatomic) struct CGSize text2Size;

@end

