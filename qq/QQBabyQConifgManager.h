//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQBabyQConifgManager : NSObject
{
}

+ (id)getImagePath:(int)arg1;
+ (id)getImageDir;
+ (id)getInstance;
- (id)_fileMD5:(id)arg1;
- (void)zipDownloadWithURL:(id)arg1 MD5:(id)arg2;
- (_Bool)unZipPacket:(id)arg1 unZipPath:(id)arg2 clearZipPath:(_Bool)arg3;
- (void)clearRedPoint:(int)arg1;
- (id)getBabyQConfigItems;
- (id)getDefaultItems;
- (_Bool)configEnable;
- (id)parseBabyQConfig:(id)arg1;

@end

