//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SectionPermissonModel : NSObject
{
    NSString *_sId;
    int _permission;
    NSString *_showText;
    int _textColor;
    _Bool _permission_canRead;
    _Bool _permission_canDownload;
    _Bool _permission_canBuy;
    int _xo;
}

- (void).cxx_destruct;
- (_Bool)canHandlePermissionThisVersionInDownloader;
- (_Bool)canHandlePermissionThisVersionInReader;
@property(nonatomic) _Bool permission_canBuy; // @dynamic permission_canBuy;
@property(nonatomic) _Bool permission_canDownload; // @dynamic permission_canDownload;
@property(nonatomic) _Bool permission_canRead; // @dynamic permission_canRead;

// Remaining properties
@property(nonatomic) int permission; // @dynamic permission;
@property(retain, nonatomic) NSString *sId; // @dynamic sId;
@property(retain, nonatomic) NSString *showText; // @dynamic showText;
@property(nonatomic) int textColor; // @dynamic textColor;

@end

