//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCCStoryPlayerStorySnapViewState : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _viewed;
    NSString *_snapId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 viewed:(_Bool)arg2;
@property(copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(nonatomic) _Bool viewed; // @synthesize viewed=_viewed;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

