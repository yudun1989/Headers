//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IShell-Protocol.h"

@class NSString;
@protocol NSCopying;

@interface IShellBase : NSObject <IShell>
{
}

- (void)parser:(id)arg1 key:(id *)arg2 value:(id *)arg3;
- (_Bool)isHelp:(id)arg1;
- (_Bool)run:(id)arg1 params:(id)arg2 inStream:(id)arg3;
@property(readonly, nonatomic) id <NSCopying> name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

