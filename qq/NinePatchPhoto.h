//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneModel.h>

@class NSString;

@interface NinePatchPhoto : QZoneModel
{
    struct UIEdgeInsets _fillInfo;
    struct UIEdgeInsets _stretchInfo;
}

+ (id)getNinePatchFromUrl:(id)arg1;
@property(nonatomic) struct UIEdgeInsets stretchInfo; // @synthesize stretchInfo=_stretchInfo;
@property(nonatomic) struct UIEdgeInsets fillInfo; // @synthesize fillInfo=_fillInfo;

// Remaining properties
@property(nonatomic) _Bool isNinePatch; // @dynamic isNinePatch;
@property(nonatomic) long long picHeight; // @dynamic picHeight;
@property(nonatomic) long long picWidth; // @dynamic picWidth;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

