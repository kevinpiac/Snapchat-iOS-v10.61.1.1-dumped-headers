//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GHFill.h"

@class NSArray;

@interface GHGradient : GHFill
{
    NSArray *stops;
}

- (void).cxx_destruct;
- (void)fillPathToContext:(struct CGContext *)arg1 withSVGContext:(id)arg2 objectBoundingBox:(struct CGRect)arg3;
- (id)initWithDictionary:(id)arg1;
- (struct CGGradient *)newGradientRefWithSVGContext:(id)arg1;
- (_Bool)useUserSpace;

@end

