//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryDrawingBuilder : NSObject
{
    NSString *_type;
    NSArray *_strokes;
    NSString *_imageData;
    NSNumber *_smoothingVersion;
}

+ (id)withJUGalleryDrawing:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setImageData:(id)arg1;
- (id)setSmoothingVersion:(id)arg1;
- (id)setSmoothingVersionValue:(int)arg1;
- (id)setStrokes:(id)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;

@end

