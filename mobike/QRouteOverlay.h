//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface QRouteOverlay : NSObject
{
    _Bool _isDrawArrow;
    _Bool _isDrawCap;
    _Bool _isUserDefaultControl;
    int _textureRow;
    NSMutableArray *_arrPoint;
    NSMutableArray *_arrLine;
    double _lineWidth;
    unsigned long long _drawType;
    NSString *_arrowImageName;
    double _dottedLineStep;
    NSString *_textureNameMultiLine;
    NSString *_textureNameMultiCap;
    NSString *_textureNameImaginaryLine;
    NSString *_textureNameDottedLine;
    unsigned long long _orderOfBezier;
    NSArray *_controlPoints;
}

@property(retain, nonatomic) NSArray *controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) _Bool isUserDefaultControl; // @synthesize isUserDefaultControl=_isUserDefaultControl;
@property(nonatomic) unsigned long long orderOfBezier; // @synthesize orderOfBezier=_orderOfBezier;
@property(retain, nonatomic) NSString *textureNameDottedLine; // @synthesize textureNameDottedLine=_textureNameDottedLine;
@property(retain, nonatomic) NSString *textureNameImaginaryLine; // @synthesize textureNameImaginaryLine=_textureNameImaginaryLine;
@property(retain, nonatomic) NSString *textureNameMultiCap; // @synthesize textureNameMultiCap=_textureNameMultiCap;
@property(retain, nonatomic) NSString *textureNameMultiLine; // @synthesize textureNameMultiLine=_textureNameMultiLine;
@property(nonatomic) _Bool isDrawCap; // @synthesize isDrawCap=_isDrawCap;
@property(nonatomic) _Bool isDrawArrow; // @synthesize isDrawArrow=_isDrawArrow;
@property(nonatomic) double dottedLineStep; // @synthesize dottedLineStep=_dottedLineStep;
@property(retain, nonatomic) NSString *arrowImageName; // @synthesize arrowImageName=_arrowImageName;
@property(nonatomic) int textureRow; // @synthesize textureRow=_textureRow;
@property(nonatomic) unsigned long long drawType; // @synthesize drawType=_drawType;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSMutableArray *arrLine; // @synthesize arrLine=_arrLine;
@property(retain, nonatomic) NSMutableArray *arrPoint; // @synthesize arrPoint=_arrPoint;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithArrData:(id)arg1 arrLine:(id)arg2;

@end

