//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSnapcodeGenerator : NSObject
{
    NSString *_svgGhost;
    int _canvasSize;
}

- (void).cxx_destruct;
- (id)SVGStringForSnapcodeGhost;
- (id)SVGStringFromSnapcodeData:(id)arg1 version:(int)arg2 borderWidth:(double)arg3 dotsOnly:(_Bool)arg4;
- (id)SVGStringFromSnapcodeUUID:(id)arg1 version:(int)arg2 borderWidth:(double)arg3 dotsOnly:(_Bool)arg4;
- (id)SVGViewFromSVGString:(id)arg1;
- (id)generateBitmojiSnapcodeWithUUID:(id)arg1 version:(int)arg2 borderWidth:(double)arg3;
- (id)init;
- (id)initWithCanvasSize:(int)arg1;

@end
