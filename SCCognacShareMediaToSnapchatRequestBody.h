//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, UIImage;

@interface SCCognacShareMediaToSnapchatRequestBody : NSObject
{
    _Bool _animated;
    UIImage *_stickerImage;
    NSData *_stickerImageData;
    double _width;
    double _height;
    double _centerX;
    double _centerY;
    double _rotation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(copy, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(copy, nonatomic) NSData *stickerImageData; // @synthesize stickerImageData=_stickerImageData;
@property(nonatomic) double width; // @synthesize width=_width;

@end

