//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface KSULocalMusicPackage : GPBMessage
{
}

+ (id)descriptor;
+ (id)localMusicPackageWithAVURLAsset:(id)arg1;
+ (id)localMusicPackageWithMediaItem:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *album; // @dynamic album;
@property(copy, nonatomic) NSString *artist; // @dynamic artist;
@property(nonatomic) unsigned long long duration; // @dynamic duration;
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

