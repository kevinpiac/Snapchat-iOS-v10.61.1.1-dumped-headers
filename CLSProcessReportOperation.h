//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CLSInternalReport, CLSSymbolResolver;

@interface CLSProcessReportOperation : NSOperation
{
    CLSSymbolResolver *_symbolResolver;
    CLSInternalReport *_report;
}

- (void).cxx_destruct;
- (id)binaryImagePath;
- (id)initWithReport:(id)arg1 resolver:(id)arg2;
- (void)main;
@property(readonly, nonatomic) CLSInternalReport *report; // @synthesize report=_report;
@property(readonly, nonatomic) CLSSymbolResolver *symbolResolver; // @synthesize symbolResolver=_symbolResolver;
- (_Bool)symbolicateFile:(id)arg1 withResolver:(id)arg2;
- (id)threadArrayFromFile:(id)arg1;

@end

