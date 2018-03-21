//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface OCRConfigModel : QQModel
{
    _Bool _scanOcrOpen;
    _Bool _aioOcrOpen;
    _Bool _qzoneOcrOpen;
    _Bool _soutiScanEntrOpen;
    _Bool _soutiResultEntrOpen;
    long long _version;
    NSString *_scanEnterText;
    NSString *_scanLine1;
    NSString *_aioEnterText;
}

@property(nonatomic) _Bool soutiResultEntrOpen; // @synthesize soutiResultEntrOpen=_soutiResultEntrOpen;
@property(nonatomic) _Bool soutiScanEntrOpen; // @synthesize soutiScanEntrOpen=_soutiScanEntrOpen;
@property(nonatomic) _Bool qzoneOcrOpen; // @synthesize qzoneOcrOpen=_qzoneOcrOpen;
@property(retain, nonatomic) NSString *aioEnterText; // @synthesize aioEnterText=_aioEnterText;
@property(nonatomic) _Bool aioOcrOpen; // @synthesize aioOcrOpen=_aioOcrOpen;
@property(retain, nonatomic) NSString *scanLine1; // @synthesize scanLine1=_scanLine1;
@property(retain, nonatomic) NSString *scanEnterText; // @synthesize scanEnterText=_scanEnterText;
@property(nonatomic) _Bool scanOcrOpen; // @synthesize scanOcrOpen=_scanOcrOpen;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

