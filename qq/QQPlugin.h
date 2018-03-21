//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQPluginInfo;
@protocol IQQPluginInterface;

@interface QQPlugin : NSObject
{
    QQPluginInfo *_info;
    NSString *_pluginID;
    id <IQQPluginInterface> _pluginInstance;
    int _xo;
    int pluginType;
}

+ (id)QQPluginWithID:(id)arg1 type:(int)arg2 info:(id)arg3 instance:(id)arg4;
@property(nonatomic) int pluginType; // @synthesize pluginType;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) QQPluginInfo *info; // @dynamic info;
@property(copy, nonatomic) NSString *pluginID; // @dynamic pluginID;
@property(retain, nonatomic) id <IQQPluginInterface> pluginInstance; // @dynamic pluginInstance;

@end

