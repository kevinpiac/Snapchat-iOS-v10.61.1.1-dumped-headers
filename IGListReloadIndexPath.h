//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface IGListReloadIndexPath : NSObject
{
    NSIndexPath *_fromIndexPath;
    NSIndexPath *_toIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=_fromIndexPath;
- (id)initWithFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
@property(readonly, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=_toIndexPath;

@end

