//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSArray, NSString;

@interface SCLSIDebugInfoAnalyzerSection : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_analyzerName;
    NSArray *_annotations;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *analyzerName; // @synthesize analyzerName=_analyzerName;
@property(copy, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAnalyzerName:(id)arg1 annotations:(id)arg2;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

