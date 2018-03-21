//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VASAvatarModel : NSObject
{
    _Bool _isApng;
    _Bool _resNeedsReload;
    unsigned int _resId;
    long long _smallResStatus;
    long long _mediumResStatus;
    long long _largeResStatus;
    NSString *_smallResPath;
    NSString *_mediumResPath;
    NSString *_largeResPath;
}

@property(nonatomic) _Bool resNeedsReload; // @synthesize resNeedsReload=_resNeedsReload;
@property(nonatomic) _Bool isApng; // @synthesize isApng=_isApng;
@property(copy, nonatomic) NSString *largeResPath; // @synthesize largeResPath=_largeResPath;
@property(copy, nonatomic) NSString *mediumResPath; // @synthesize mediumResPath=_mediumResPath;
@property(copy, nonatomic) NSString *smallResPath; // @synthesize smallResPath=_smallResPath;
@property(nonatomic) long long largeResStatus; // @synthesize largeResStatus=_largeResStatus;
@property(nonatomic) long long mediumResStatus; // @synthesize mediumResStatus=_mediumResStatus;
@property(nonatomic) long long smallResStatus; // @synthesize smallResStatus=_smallResStatus;
@property(nonatomic) unsigned int resId; // @synthesize resId=_resId;
- (void)dealloc;
- (void)setResFilePath:(id)arg1 size:(unsigned long long)arg2;
- (id)getResFilePathWithSize:(unsigned long long)arg1;
- (void)setResStatus:(long long)arg1 size:(unsigned long long)arg2;
- (long long)getResStatusWithSize:(unsigned long long)arg1;
- (id)init;

@end

