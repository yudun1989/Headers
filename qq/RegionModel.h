//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface RegionModel : QQModel <NSCopying>
{
    int _code;
    NSString *_name;
    NSArray *_subregions;
    int _xo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) int code; // @dynamic code;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSArray *subregions; // @dynamic subregions;

@end
