//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQSecurityConfigHelper : NSObject
{
}

+ (id)pathOfConfig:(id)arg1;
+ (id)contentOfLocalConfig:(id)arg1;
+ (unsigned int)validTimeOfLocalConfig:(id)arg1;
+ (unsigned int)updTimeOfLocalConfig:(id)arg1;
+ (unsigned int)versionOfLocalConfig:(id)arg1;
+ (id)dataOfConfig:(id)arg1;
+ (unsigned int)writeValidTime:(unsigned int)arg1 forConfig:(id)arg2;
+ (unsigned int)writeData:(id)arg1 Version:(int)arg2 ValidTime:(unsigned int)arg3 forConfig:(id)arg4;

@end

