//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSMigrationKwaiConfig;

@interface KSMigrationGuideResponse : NSObject
{
    KSMigrationKwaiConfig *_startup;
    KSMigrationKwaiConfig *_record;
    KSMigrationKwaiConfig *_camera;
}

@property(retain, nonatomic) KSMigrationKwaiConfig *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) KSMigrationKwaiConfig *record; // @synthesize record=_record;
@property(retain, nonatomic) KSMigrationKwaiConfig *startup; // @synthesize startup=_startup;
- (void).cxx_destruct;

@end
