//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLProgram;

@interface FMFaceDanceNode : NSObject
{
    int updateTimeLocation;
    int uTimeLocation;
    int imageLocation;
    int centerPosLocation;
    int ratioLocation;
    int spriteIndexLocation;
    int rowNumLocation;
    int colNumLocation;
    int rowLocation;
    int colLocation;
    int widthLocation;
    int heightLocation;
    int offsetLocation;
    int positionLocation;
    int coordLoaction;
    int frameCountLocation;
    int rotateAngleLocation;
    double updateTime;
    float *uTime;
    float pos[2];
    float (*offset)[2];
    GLProgram *program;
    unsigned int textureid;
    float ratio;
    float width;
    float height;
    float angle;
    int spriteIndex;
    int rowNum;
    int colNum;
    int row;
    int col;
    int frameRate;
    int frames;
}

- (void).cxx_destruct;
- (void)drawArr;
- (void)setParam;
- (void)draw;
- (void)initProgram;
- (void)setup;
- (id)initWithTime:(float *)arg1 program:(id)arg2 textureid:(int)arg3 ratio:(float)arg4 offset:(float (*)[2])arg5;

@end

