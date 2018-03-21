//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, ParBundle;

@interface ARParBundle : NSObject
{
    ParBundle *_pbBundle;
    NSDictionary *_bundleConfig;
    NSArray *_contentFiles;
    NSDictionary *_dictContentFiles;
}

+ (id)unGzippedFile:(id)arg1 Data:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSDictionary *dictContentFiles; // @synthesize dictContentFiles=_dictContentFiles;
@property(retain, nonatomic) NSArray *contentFiles; // @synthesize contentFiles=_contentFiles;
@property(retain, nonatomic) NSDictionary *bundleConfig; // @synthesize bundleConfig=_bundleConfig;
@property(retain, nonatomic) ParBundle *pbBundle; // @synthesize pbBundle=_pbBundle;
- (void).cxx_destruct;
- (void)extractFilesTo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)readContentFile:(id)arg1 error:(id *)arg2;
- (id)description;
- (void)loadBundleFromFile:(id)arg1;
- (id)initWithParFile:(id)arg1;

@end

