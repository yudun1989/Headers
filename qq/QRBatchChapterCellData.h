//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QRBatchChapterCellData : NSObject
{
    NSString *_title;
    _Bool _isFree;
    _Bool _isSelected;
    long long _price;
    double _precisePrice;
    int _seq;
    _Bool _fileExists;
    _Bool _isPayed;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool fileExists; // @dynamic fileExists;
@property(nonatomic) _Bool isFree; // @dynamic isFree;
@property(nonatomic) _Bool isPayed; // @dynamic isPayed;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(nonatomic) double precisePrice; // @dynamic precisePrice;
@property(nonatomic) long long price; // @dynamic price;
@property(nonatomic) int seq; // @dynamic seq;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

