//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCLSIDebugInfoVertex : NSObject <SCComposerJsConvertible, NSCopying>
{
    double _x;
    double _y;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double y; // @synthesize y=_y;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
