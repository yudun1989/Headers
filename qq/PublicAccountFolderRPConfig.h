//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PublicAccountFolderRPConfig : NSObject
{
    NSString *_version;
    NSString *_show;
    NSString *_msg;
    int _xo;
}

- (void)dealloc;
- (_Bool)isConfigValid;
- (id)description;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(retain, nonatomic) NSString *show; // @dynamic show;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

