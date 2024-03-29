//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, UIColor;

@interface SCSearchSeeMoreViewModel : NSObject <NSCopying>
{
    _Bool _isFullWidth;
    NSAttributedString *_titleText;
    UIColor *_backgroundColor;
    UIColor *_backgroundHighlightedColor;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *backgroundHighlightedColor; // @synthesize backgroundHighlightedColor=_backgroundHighlightedColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitleText:(id)arg1 backgroundColor:(id)arg2 backgroundHighlightedColor:(id)arg3 isFullWidth:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFullWidth; // @synthesize isFullWidth=_isFullWidth;
@property(readonly, copy, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;

@end

