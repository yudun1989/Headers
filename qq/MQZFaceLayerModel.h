//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CAShapeLayer, CATextLayer;

@interface MQZFaceLayerModel : NSObject
{
    CAShapeLayer *_faceLayer;
    CAShapeLayer *_textLayer;
    CATextLayer *_textValueLayer;
    CAShapeLayer *_delLayer;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_tableLayer;
}

@property(retain, nonatomic) CAShapeLayer *tableLayer; // @synthesize tableLayer=_tableLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAShapeLayer *delLayer; // @synthesize delLayer=_delLayer;
@property(retain, nonatomic) CATextLayer *textValueLayer; // @synthesize textValueLayer=_textValueLayer;
@property(retain, nonatomic) CAShapeLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) CAShapeLayer *faceLayer; // @synthesize faceLayer=_faceLayer;
- (void).cxx_destruct;

@end

