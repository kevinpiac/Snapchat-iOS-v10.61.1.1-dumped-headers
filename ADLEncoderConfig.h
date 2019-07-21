//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADLEncoderConfig : NSObject
{
    int _initialBitrateKbps;
    int _initialFrameRate;
    int _width;
    int _height;
    NSString *_mimeType;
}

+ (id)EncoderConfigWithMimeType:(id)arg1 initialBitrateKbps:(int)arg2 initialFrameRate:(int)arg3 width:(int)arg4 height:(int)arg5;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
- (id)initWithMimeType:(id)arg1 initialBitrateKbps:(int)arg2 initialFrameRate:(int)arg3 width:(int)arg4 height:(int)arg5;
@property(readonly, nonatomic) int initialBitrateKbps; // @synthesize initialBitrateKbps=_initialBitrateKbps;
@property(readonly, nonatomic) int initialFrameRate; // @synthesize initialFrameRate=_initialFrameRate;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) int width; // @synthesize width=_width;

@end

