//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSMusicUploadItemValidator-Protocol.h"

@class NSString;

@interface KSMusicUploadItemServerSideValidator : NSObject <KSMusicUploadItemValidator>
{
}

- (id)_createValidateRequestForName:(id)arg1 type:(id)arg2;
- (void)_validateName:(id)arg1 type:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)validateArtistName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validateMusicName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

