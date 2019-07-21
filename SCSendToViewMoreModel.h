//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, UIColor;

@interface SCSendToViewMoreModel : NSObject <NSCopying>
{
    _Bool _displayShadow;
    NSAttributedString *_showMoreText;
    UIColor *_backgroundColor;
    double _preferredHeight;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool displayShadow; // @synthesize displayShadow=_displayShadow;
- (unsigned long long)hash;
- (id)initWithShowMoreText:(id)arg1 backgroundColor:(id)arg2 displayShadow:(_Bool)arg3 preferredHeight:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(readonly, copy, nonatomic) NSAttributedString *showMoreText; // @synthesize showMoreText=_showMoreText;

@end
