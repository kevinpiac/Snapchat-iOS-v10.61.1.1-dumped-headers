//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SOJUGalleryRange;

@interface SOJUGalleryCaptionStyleRangeBuilder : NSObject
{
    NSNumber *_bold;
    NSNumber *_underline;
    NSNumber *_italics;
    SOJUGalleryRange *_range;
}

+ (id)withJUGalleryCaptionStyleRange:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBold:(id)arg1;
- (id)setBoldValue:(_Bool)arg1;
- (id)setItalics:(id)arg1;
- (id)setItalicsValue:(_Bool)arg1;
- (id)setRange:(id)arg1;
- (id)setUnderline:(id)arg1;
- (id)setUnderlineValue:(_Bool)arg1;

@end

