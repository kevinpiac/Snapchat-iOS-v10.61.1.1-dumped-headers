//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSDictionary, NSString;

@interface SCCBlizzardEvent : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _userTracked;
    NSString *_name;
    NSDictionary *_parameters;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 parameters:(id)arg2 userTracked:(_Bool)arg3;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool userTracked; // @synthesize userTracked=_userTracked;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

