//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GAMultiThreadObject.h>

#import <QQMainProject/IAccountChangedObsever-Protocol.h>

@class NSString;

@interface QZoneStorageBase : GAMultiThreadObject <IAccountChangedObsever>
{
    long long _currentUin;
}

- (id)getCurrentFolderPath;
- (_Bool)enableVersionControl;
- (int)getCurrentVersion;
- (_Bool)checkVersion:(int)arg1 clearFiles:(_Bool)arg2;
- (void)saveVersion:(int)arg1 withVersionFileName:(id)arg2;
- (void)saveVersion:(int)arg1;
- (int)getVersionWithFilePath:(id)arg1;
- (void)flush;
- (void)load;
- (void)onAccountChanged:(long long)arg1;
- (void)onAccountLogout;
- (void)onAccountLogin;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

