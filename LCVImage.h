//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface LCVImage : NSObject
{
    int _width;
    int _height;
    int _step;
    int _type;
    NSData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int step; // @synthesize step=_step;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int width; // @synthesize width=_width;

@end

