//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableSet;

@interface SCComposerCachedBundle : NSObject
{
    NSBundle *_bundle;
    NSMutableSet *_invalidImages;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)initWithBundle:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *invalidImages; // @synthesize invalidImages=_invalidImages;

@end
